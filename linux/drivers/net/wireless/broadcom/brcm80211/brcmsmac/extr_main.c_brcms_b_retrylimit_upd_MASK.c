
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct brcms_hardware {int SRL; int LRL; int d11core; scalar_t__ up; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct brcms_hardware *VAR_5,
       u16 VAR_6, u16 VAR_7)
{
 VAR_5->SRL = VAR_6;
 VAR_5->LRL = VAR_7;


 if (VAR_5->up) {
  FUNC_2(VAR_5->d11core, FUNC_0(VAR_3),
        VAR_0 | VAR_2);
  (void)FUNC_1(VAR_5->d11core, FUNC_0(VAR_3));
  FUNC_2(VAR_5->d11core, FUNC_0(VAR_4), VAR_5->SRL);
  FUNC_2(VAR_5->d11core, FUNC_0(VAR_3),
        VAR_0 | VAR_1);
  (void)FUNC_1(VAR_5->d11core, FUNC_0(VAR_3));
  FUNC_2(VAR_5->d11core, FUNC_0(VAR_4), VAR_5->LRL);
 }
}
