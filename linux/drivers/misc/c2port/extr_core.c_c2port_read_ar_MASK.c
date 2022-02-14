
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct c2port_ops {scalar_t__ (* c2d_get ) (struct c2port_device*) ;int (* c2d_dir ) (struct c2port_device*,int) ;int (* c2d_set ) (struct c2port_device*,int) ;} ;
struct c2port_device {struct c2port_ops* ops; } ;


 int FUNC_0 (struct c2port_device*) ;
 int FUNC_1 (struct c2port_device*,int) ;
 int FUNC_2 (struct c2port_device*,int) ;
 int FUNC_3 (struct c2port_device*,int) ;
 int FUNC_4 (struct c2port_device*,int) ;
 scalar_t__ FUNC_5 (struct c2port_device*) ;

__attribute__((used)) static int FUNC_6(struct c2port_device *VAR_0, u8 *VAR_1)
{
 struct c2port_ops *VAR_2 = VAR_0->ops;
 int VAR_3;


 FUNC_0(VAR_0);


 VAR_2->c2d_dir(VAR_0, 0);
 VAR_2->c2d_set(VAR_0, 0);
 FUNC_0(VAR_0);
 VAR_2->c2d_set(VAR_0, 1);
 FUNC_0(VAR_0);


 VAR_2->c2d_dir(VAR_0, 1);
 *VAR_1 = 0;
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  *VAR_1 >>= 1;

  FUNC_0(VAR_0);
  if (VAR_2->c2d_get(VAR_0))
   *VAR_1 |= 0x80;
 }


 FUNC_0(VAR_0);

 return 0;
}
