
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cnic_ulp_ops {int (* indicate_netevent ) (void*,unsigned long,int ) ;} ;
struct cnic_local {int * ulp_flags; void** ulp_handle; int * ulp_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct cnic_ulp_ops* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (void*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_7(struct cnic_local *VAR_3, unsigned long VAR_4,
         u16 VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct cnic_ulp_ops *VAR_7;
  void *VAR_8;

  FUNC_2(&VAR_2);
  VAR_7 = FUNC_4(VAR_3->ulp_ops[VAR_6],
      FUNC_1(&VAR_2));
  if (!VAR_7 || !VAR_7->indicate_netevent) {
   FUNC_3(&VAR_2);
   continue;
  }

  VAR_8 = VAR_3->ulp_handle[VAR_6];

  FUNC_5(VAR_1, &VAR_3->ulp_flags[VAR_6]);
  FUNC_3(&VAR_2);

  VAR_7->indicate_netevent(VAR_8, VAR_4, VAR_5);

  FUNC_0(VAR_1, &VAR_3->ulp_flags[VAR_6]);
 }
}
