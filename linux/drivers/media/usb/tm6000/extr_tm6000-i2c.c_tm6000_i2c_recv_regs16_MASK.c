
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {scalar_t__ dev_type; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tm6000_core*,int,int ,unsigned char,int,...) ;

__attribute__((used)) static int FUNC_1(struct tm6000_core *VAR_8, unsigned char VAR_9,
      __u16 VAR_10, char *VAR_11, int VAR_12)
{
 int VAR_13;
 unsigned char VAR_14;

 if (!VAR_11 || VAR_12 != 2)
  return -1;


 if (VAR_8->dev_type == VAR_3) {
  VAR_14 = VAR_10 & 0xFF;
  VAR_13 = FUNC_0(VAR_8, VAR_5 | VAR_7 |
   VAR_6, VAR_1,
   VAR_9 | (VAR_10 & 0xFF00), 0, &VAR_14, 1);

  if (VAR_13 < 0) {

   return VAR_13;
  }

  VAR_13 = FUNC_0(VAR_8, VAR_4 | VAR_7 |
   VAR_6, VAR_2,
   VAR_10, 0, VAR_11, VAR_12);
 } else {
  VAR_13 = FUNC_0(VAR_8, VAR_4 | VAR_7 |
   VAR_6, VAR_0,
   VAR_9, VAR_10, VAR_11, VAR_12);
 }


 return VAR_13;
}
