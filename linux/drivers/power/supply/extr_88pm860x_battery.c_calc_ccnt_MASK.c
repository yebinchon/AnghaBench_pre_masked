
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int dummy; } ;
struct ccnt {unsigned int pos; unsigned int neg; int spos; int total_chg; int total_dischg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pm860x_battery_info*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct pm860x_battery_info *VAR_6, struct ccnt *VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_6, VAR_2, &VAR_10);
 if (VAR_9)
  goto out;
 VAR_8 = VAR_10 & 0xffff;
 VAR_9 = FUNC_0(VAR_6, VAR_3, &VAR_10);
 if (VAR_9)
  goto out;
 VAR_8 |= (VAR_10 & 0xffff) << 16;
 VAR_7->pos += VAR_8;

 VAR_9 = FUNC_0(VAR_6, VAR_0, &VAR_10);
 if (VAR_9)
  goto out;
 VAR_8 = VAR_10 & 0xffff;
 VAR_9 = FUNC_0(VAR_6, VAR_1, &VAR_10);
 if (VAR_9)
  goto out;
 VAR_8 |= (VAR_10 & 0xffff) << 16;
 VAR_8 = ~VAR_8 + 1;
 VAR_7->neg += VAR_8;

 VAR_9 = FUNC_0(VAR_6, VAR_5, &VAR_10);
 if (VAR_9)
  goto out;
 VAR_7->spos += VAR_10;
 VAR_9 = FUNC_0(VAR_6, VAR_4, &VAR_10);
 if (VAR_9)
  goto out;






 VAR_7->total_chg = (int) ((VAR_7->pos * 18236) >> 40);
 VAR_7->total_dischg = (int) ((VAR_7->neg * 18236) >> 40);
 return 0;
out:
 return VAR_9;
}
