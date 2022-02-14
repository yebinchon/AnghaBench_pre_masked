
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_port {int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vcc_port* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (struct vcc_port*) ;
 scalar_t__ FUNC_5 (struct vcc_port*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct vcc_port *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = VAR_6;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_3);
 if (!VAR_7)
  return -VAR_1;

 FUNC_1(&VAR_7->lock, VAR_8);

 if (FUNC_3(VAR_5, "%ud", &VAR_10) != 1 || VAR_10 != 1)
  VAR_9 = -VAR_0;
 else if (FUNC_5(VAR_7, VAR_2) < 0)
  FUNC_4(VAR_7);

 FUNC_2(&VAR_7->lock, VAR_8);

 return VAR_9;
}
