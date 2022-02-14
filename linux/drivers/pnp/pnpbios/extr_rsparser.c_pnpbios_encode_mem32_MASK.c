
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long start; } ;
struct pnp_dev {int dev; } ;


 int FUNC_0 (int *,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (struct resource*) ;
 unsigned long FUNC_2 (struct resource*) ;

__attribute__((used)) static void FUNC_3(struct pnp_dev *VAR_0, unsigned char *VAR_1,
     struct resource *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 if (FUNC_1(VAR_2)) {
  VAR_3 = VAR_2->start;
  VAR_4 = FUNC_2(VAR_2);
 } else {
  VAR_3 = 0;
  VAR_4 = 0;
 }

 VAR_1[4] = VAR_3 & 0xff;
 VAR_1[5] = (VAR_3 >> 8) & 0xff;
 VAR_1[6] = (VAR_3 >> 16) & 0xff;
 VAR_1[7] = (VAR_3 >> 24) & 0xff;
 VAR_1[8] = VAR_3 & 0xff;
 VAR_1[9] = (VAR_3 >> 8) & 0xff;
 VAR_1[10] = (VAR_3 >> 16) & 0xff;
 VAR_1[11] = (VAR_3 >> 24) & 0xff;
 VAR_1[16] = VAR_4 & 0xff;
 VAR_1[17] = (VAR_4 >> 8) & 0xff;
 VAR_1[18] = (VAR_4 >> 16) & 0xff;
 VAR_1[19] = (VAR_4 >> 24) & 0xff;

 FUNC_0(&VAR_0->dev, "  encode mem32 %#lx-%#lx\n", VAR_3, VAR_3 + VAR_4 - 1);
}
