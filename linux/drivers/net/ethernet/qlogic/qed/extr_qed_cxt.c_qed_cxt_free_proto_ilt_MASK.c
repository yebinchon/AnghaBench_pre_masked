
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hwfn {int dummy; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qed_hwfn*,int ,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int,int *) ;
 int FUNC_2 (struct qed_hwfn*,int) ;
 int FUNC_3 (struct qed_hwfn*,int) ;
 int FUNC_4 (struct qed_hwfn*) ;

int FUNC_5(struct qed_hwfn *VAR_4, enum protocol_type VAR_5)
{
 int VAR_6;
 u32 VAR_7;


 VAR_6 = FUNC_0(VAR_4, VAR_1,
        FUNC_2(VAR_4,
        VAR_5),
        FUNC_1(VAR_4,
        VAR_5, &VAR_7));

 if (VAR_6)
  return VAR_6;




 VAR_5 = VAR_0;
 VAR_6 = FUNC_0(VAR_4, VAR_3, 0,
        FUNC_3(VAR_4, VAR_5));
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_4, VAR_2, 0,
        FUNC_4(VAR_4));

 return VAR_6;
}
