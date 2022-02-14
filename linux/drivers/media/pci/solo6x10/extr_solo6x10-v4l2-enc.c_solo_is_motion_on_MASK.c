
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_enc_dev {int ch; struct solo_dev* solo_dev; } ;
struct solo_dev {int motion_mask; } ;



__attribute__((used)) static int FUNC_0(struct solo_enc_dev *VAR_0)
{
 struct solo_dev *VAR_1 = VAR_0->solo_dev;

 return (VAR_1->motion_mask >> VAR_0->ch) & 1;
}
