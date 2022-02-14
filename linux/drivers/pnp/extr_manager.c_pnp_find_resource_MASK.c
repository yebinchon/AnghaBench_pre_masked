
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned char flags; } ;
struct pnp_dev {int dummy; } ;


 unsigned char VAR_0 ;
 struct resource* FUNC_0 (struct pnp_dev*,unsigned long,unsigned int) ;

__attribute__((used)) static struct resource *FUNC_1(struct pnp_dev *VAR_1,
       unsigned char VAR_2,
       unsigned long VAR_3,
       unsigned int VAR_4)
{
 struct resource *VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4);


 if (VAR_5) {
  VAR_5->flags &= ~VAR_0;
  VAR_5->flags |= VAR_2 & VAR_0;
 }

 return VAR_5;
}
