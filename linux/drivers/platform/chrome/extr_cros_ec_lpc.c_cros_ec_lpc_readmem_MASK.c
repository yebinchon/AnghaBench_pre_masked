
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cros_ec_device {int dummy; } ;
struct TYPE_2__ {int (* read ) (scalar_t__,int,char*) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (scalar_t__,unsigned int,char*) ;
 int FUNC_1 (scalar_t__,int,char*) ;

__attribute__((used)) static int FUNC_2(struct cros_ec_device *VAR_4, unsigned int VAR_5,
          unsigned int VAR_6, void *VAR_7)
{
 int VAR_8 = VAR_5;
 char *VAR_9 = VAR_7;
 int VAR_10 = 0;

 if (VAR_5 >= VAR_1 - VAR_6)
  return -VAR_2;


 if (VAR_6) {
  VAR_3.read(VAR_0 + VAR_5, VAR_6, VAR_9);
  return VAR_6;
 }


 for (; VAR_8 < VAR_1; VAR_8++, VAR_9++) {
  VAR_3.read(VAR_0 + VAR_8, 1, VAR_9);
  VAR_10++;
  if (!*VAR_9)
   break;
 }

 return VAR_10;
}
