
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_reset_cmd {void* halt_pkd; void* val; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_reset_cmd,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct fw_reset_cmd*,int ,int) ;
 int FUNC_3 (struct adapter*,int ,int ,int ) ;
 int FUNC_4 (struct adapter*,unsigned int,struct fw_reset_cmd*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_10, unsigned int VAR_11, int VAR_12)
{
 int VAR_13 = 0;





 if (VAR_11 <= VAR_4) {
  struct fw_reset_cmd VAR_14;

  FUNC_2(&VAR_14, 0, sizeof(VAR_14));
  FUNC_0(VAR_14, VAR_7, VAR_9);
  VAR_14.val = FUNC_1(VAR_6 | VAR_5);
  VAR_14.halt_pkd = FUNC_1(VAR_1);
  VAR_13 = FUNC_4(VAR_10, VAR_11, &VAR_14, sizeof(VAR_14), ((void*)0));
 }
 if (VAR_13 == 0 || VAR_12) {
  FUNC_3(VAR_10, VAR_0, VAR_8, VAR_8);
  FUNC_3(VAR_10, VAR_2, VAR_3,
     VAR_3);
 }





 return VAR_13;
}
