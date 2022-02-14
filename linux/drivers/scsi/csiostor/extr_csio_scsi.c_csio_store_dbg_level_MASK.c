
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {void* log_level; } ;
struct csio_lnode {TYPE_1__ params; } ;
struct TYPE_4__ {void* log_level; } ;
struct csio_hw {TYPE_2__ params; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct csio_hw* FUNC_1 (struct csio_lnode*) ;
 int FUNC_2 (char const) ;
 struct csio_lnode* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*,void**) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct csio_lnode *VAR_5 = FUNC_3(FUNC_0(VAR_1));
 struct csio_hw *VAR_6 = FUNC_1(VAR_5);
 uint32_t VAR_7 = 0;

 if (!FUNC_2(VAR_3[0]))
  return -VAR_0;

 if (FUNC_4(VAR_3, "%i", &VAR_7))
  return -VAR_0;

 VAR_5->params.log_level = VAR_7;
 VAR_6->params.log_level = VAR_7;

 return 0;
}
