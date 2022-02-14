
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct platform_device {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int *,char*,size_t,...) ;
 size_t FUNC_1 (void*,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_10, void *VAR_11)
{
 u32 VAR_12;
 static const char * const VAR_13[] = {
  "reserved",
  "128-pin LQFP",
  "84-pin TFBGA",
  "reserved",
 };


 VAR_12 = FUNC_1(VAR_11, VAR_2);
 FUNC_0(&VAR_10->dev, "device ID %x\n", VAR_12);
 if ((VAR_12 & VAR_8) != (VAR_7 << VAR_9))
  return -1;

 FUNC_0(&VAR_10->dev, "found device %x %s (%04x:%04x)\n",
  VAR_12 >> VAR_9,
  VAR_13[(VAR_12 & VAR_0) >> VAR_1],
  (VAR_12 & VAR_3) >> VAR_4,
  (VAR_12 & VAR_5) >> VAR_6);

 return 0;
}
