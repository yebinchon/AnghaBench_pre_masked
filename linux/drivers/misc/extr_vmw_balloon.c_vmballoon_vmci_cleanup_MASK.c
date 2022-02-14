
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int vmci_doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmballoon*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vmballoon *VAR_3)
{
 FUNC_0(VAR_3, VAR_2,
        VAR_1, VAR_1);

 if (!FUNC_2(VAR_3->vmci_doorbell)) {
  FUNC_1(VAR_3->vmci_doorbell);
  VAR_3->vmci_doorbell = VAR_0;
 }
}
