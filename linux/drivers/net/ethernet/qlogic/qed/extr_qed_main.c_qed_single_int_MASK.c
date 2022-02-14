
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qed_simd_fp_handler {int token; int (* func ) (int ) ;} ;
struct qed_hwfn {struct qed_simd_fp_handler* simd_proto_handler; int sp_dpc; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct qed_hwfn*,char*,int,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct qed_dev *VAR_5 = (struct qed_dev *)VAR_4;
 struct qed_hwfn *VAR_6;
 irqreturn_t VAR_7 = VAR_1;
 u64 VAR_8;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_hwfns; VAR_9++) {
  VAR_8 = FUNC_2(&VAR_5->hwfns[VAR_9]);

  if (!VAR_8)
   continue;

  VAR_6 = &VAR_5->hwfns[VAR_9];


  if (FUNC_5(VAR_8 & 0x1)) {
   FUNC_4(VAR_6->sp_dpc);
   VAR_8 &= ~0x1;
   VAR_7 = VAR_0;
  }


  for (VAR_10 = 0; VAR_10 < 64; VAR_10++) {
   if ((0x2ULL << VAR_10) & VAR_8) {
    struct qed_simd_fp_handler *VAR_11 =
     &VAR_6->simd_proto_handler[VAR_10];

    if (VAR_11->func)
     VAR_11->func(VAR_11->token);
    else
     FUNC_0(VAR_6,
        "Not calling fastpath handler as it is NULL [handler #%d, status 0x%llx]\n",
        VAR_10, VAR_8);

    VAR_8 &= ~(0x2ULL << VAR_10);
    VAR_7 = VAR_0;
   }
  }

  if (FUNC_5(VAR_8))
   FUNC_1(VAR_6, VAR_2,
       "got an unknown interrupt status 0x%llx\n",
       VAR_8);
 }

 return VAR_7;
}
