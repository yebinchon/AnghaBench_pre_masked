
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad2s1210_state {int fexcit; int fclkin; TYPE_1__* sdev; } ;
struct TYPE_2__ {int dev; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad2s1210_state*,unsigned char) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static inline
int FUNC_2(struct ad2s1210_state *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6;

 VAR_6 = (unsigned char)(VAR_4->fexcit * (1 << 15) / VAR_4->fclkin);
 if (VAR_6 < VAR_1 || VAR_6 > VAR_0) {
  FUNC_1(&VAR_4->sdev->dev, "ad2s1210: FCW out of range\n");
  return -VAR_3;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_4, VAR_6);
}
