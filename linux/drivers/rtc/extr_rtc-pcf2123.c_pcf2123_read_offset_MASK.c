
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf2123_data {int map; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 struct pcf2123_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, long *VAR_6)
{
 struct pcf2123_data *VAR_7 = FUNC_0(VAR_5);
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_8 = FUNC_1(VAR_7->map, VAR_4, &VAR_10);
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_2((VAR_10 & VAR_1), VAR_2);

 if (VAR_10 & VAR_0)
  VAR_9 *= 2;

 *VAR_6 = ((long)VAR_9) * VAR_3;

 return 0;
}
