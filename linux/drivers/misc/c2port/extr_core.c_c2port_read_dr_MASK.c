
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct c2port_ops {scalar_t__ (* c2d_get ) (struct c2port_device*) ;int (* c2d_dir ) (struct c2port_device*,int) ;int (* c2d_set ) (struct c2port_device*,int ) ;} ;
struct c2port_device {struct c2port_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct c2port_device*) ;
 int FUNC_1 (struct c2port_device*,int) ;
 int FUNC_2 (struct c2port_device*,int ) ;
 int FUNC_3 (struct c2port_device*,int ) ;
 int FUNC_4 (struct c2port_device*,int ) ;
 int FUNC_5 (struct c2port_device*,int ) ;
 int FUNC_6 (struct c2port_device*,int) ;
 scalar_t__ FUNC_7 (struct c2port_device*) ;
 scalar_t__ FUNC_8 (struct c2port_device*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct c2port_device *VAR_1, u8 *VAR_2)
{
 struct c2port_ops *VAR_3 = VAR_1->ops;
 int VAR_4, VAR_5;


 FUNC_0(VAR_1);


 VAR_3->c2d_dir(VAR_1, 0);
 VAR_3->c2d_set(VAR_1, 0);
 FUNC_0(VAR_1);
 VAR_3->c2d_set(VAR_1, 0);
 FUNC_0(VAR_1);


 VAR_3->c2d_set(VAR_1, 0);
 FUNC_0(VAR_1);
 VAR_3->c2d_set(VAR_1, 0);
 FUNC_0(VAR_1);


 VAR_3->c2d_dir(VAR_1, 1);
 VAR_4 = 20;
 do {
  FUNC_0(VAR_1);
  if (VAR_3->c2d_get(VAR_1))
   break;

  FUNC_9(1);
 } while (--VAR_4 > 0);
 if (VAR_4 == 0)
  return -VAR_0;


 *VAR_2 = 0;
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  *VAR_2 >>= 1;

  FUNC_0(VAR_1);
  if (VAR_3->c2d_get(VAR_1))
   *VAR_2 |= 0x80;
 }


 FUNC_0(VAR_1);

 return 0;
}
