
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_ctx {int lock; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vmci_ctx* FUNC_3 (int) ;
 int FUNC_4 (struct vmci_ctx*,int*,void**) ;
 int FUNC_5 (struct vmci_ctx*,int*,void**) ;
 int FUNC_6 (struct vmci_ctx*) ;

int FUNC_7(u32 VAR_3,
        u32 VAR_4,
        u32 *VAR_5,
        void **VAR_6)
{
 struct vmci_ctx *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7)
  return VAR_1;

 FUNC_1(&VAR_7->lock);

 switch (VAR_4) {
 case 129:
  VAR_8 = FUNC_5(VAR_7, VAR_5, VAR_6);
  break;

 case 128:





  *VAR_5 = 0;
  *VAR_6 = ((void*)0);
  VAR_8 = VAR_2;
  break;

 case 130:
  VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_6);
  break;

 default:
  FUNC_0("Invalid cpt state (type=%d)\n", VAR_4);
  VAR_8 = VAR_0;
  break;
 }

 FUNC_2(&VAR_7->lock);
 FUNC_6(VAR_7);

 return VAR_8;
}
