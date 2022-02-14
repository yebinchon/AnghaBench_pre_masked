
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq32 {int value; int addr; } ;
struct zd_ioreq16 {int value; int addr; } ;
struct zd_chip {int usb; int mutex; } ;
typedef int ioreqs16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zd_chip*) ;
 int FUNC_6 (int *,struct zd_ioreq16*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct zd_chip *VAR_2,
           const struct zd_ioreq32 *VAR_3,
           unsigned int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct zd_ioreq16 VAR_8[VAR_1 * 2];
 unsigned int VAR_9;



 FUNC_1(FUNC_4(&VAR_2->mutex));

 if (VAR_4 == 0)
  return 0;
 if (VAR_4 > VAR_1)
  return -VAR_0;

 VAR_9 = 2 * VAR_4;
 FUNC_0(VAR_9 * sizeof(struct zd_ioreq16) > sizeof(VAR_8));

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = 2*VAR_5;

  VAR_8[VAR_6].value = VAR_3[VAR_5].value >> 16;
  VAR_8[VAR_6].addr = FUNC_3(VAR_3[VAR_5].addr);
  VAR_8[VAR_6+1].value = VAR_3[VAR_5].value;
  VAR_8[VAR_6+1].addr = VAR_3[VAR_5].addr;
 }

 VAR_7 = FUNC_6(&VAR_2->usb, VAR_8, VAR_9);






 return VAR_7;
}
