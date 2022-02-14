
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl_gpio_cfg {int pin; int dir; int val; } ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mxl111sf_state*,int,int *) ;
 int FUNC_1 (struct mxl111sf_state*,int ,int*) ;
 int FUNC_2 (struct mxl111sf_state*,int,int ) ;
 int FUNC_3 (struct mxl111sf_state*,int ,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mxl111sf_state *VAR_5,
         struct mxl_gpio_cfg *VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 FUNC_4("(%d, %d)", VAR_6->pin, VAR_6->dir);

 switch (VAR_6->pin) {
 case 0:
 case 1:
 case 2:
 case 3:
  VAR_7 = FUNC_1(VAR_5, VAR_2, &VAR_8);
  if (FUNC_5(VAR_7))
   goto fail;
  VAR_8 &= ~(1 << (VAR_6->pin + 4));
  VAR_8 |= (VAR_6->dir << (VAR_6->pin + 4));
  VAR_7 = FUNC_3(VAR_5, VAR_2, VAR_8);
  if (FUNC_5(VAR_7))
   goto fail;
  break;
 case 4:
 case 5:
 case 6:
 case 7:
  VAR_7 = FUNC_1(VAR_5, VAR_3, &VAR_8);
  if (FUNC_5(VAR_7))
   goto fail;
  VAR_8 &= ~(1 << VAR_6->pin);
  VAR_8 |= (VAR_6->dir << VAR_6->pin);
  VAR_7 = FUNC_3(VAR_5, VAR_3, VAR_8);
  if (FUNC_5(VAR_7))
   goto fail;
  break;
 case 8:
 case 9:
 case 10:
  VAR_7 = FUNC_1(VAR_5, VAR_4, &VAR_8);
  if (FUNC_5(VAR_7))
   goto fail;
  VAR_8 &= ~(1 << (VAR_6->pin - 3));
  VAR_8 |= (VAR_6->dir << (VAR_6->pin - 3));
  VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_8);
  if (FUNC_5(VAR_7))
   goto fail;
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = (VAR_1 == VAR_6->dir) ?
  FUNC_2(VAR_5,
           VAR_6->pin, VAR_6->val) :
  FUNC_0(VAR_5,
           VAR_6->pin, &VAR_6->val);
 FUNC_5(VAR_7);
fail:
 return VAR_7;
}
