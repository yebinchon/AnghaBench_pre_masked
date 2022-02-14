
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int substring_t ;
struct tcmu_dev {int nl_reply_supported; int dev_size; int dev_config; } ;
struct TYPE_2__ {int hw_max_sectors; int hw_block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 struct tcmu_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 (char**,char*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct tcmu_dev*,int *) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_12(struct se_device *VAR_6,
  const char *VAR_7, ssize_t VAR_8)
{
 struct tcmu_dev *VAR_9 = FUNC_0(VAR_6);
 char *VAR_10, *VAR_11, *VAR_12;
 substring_t VAR_13[VAR_3];
 int VAR_14 = 0, VAR_15;

 VAR_12 = FUNC_2(VAR_7, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_10 = VAR_12;

 while ((VAR_11 = FUNC_9(&VAR_12, ",\n")) != ((void*)0)) {
  if (!*VAR_11)
   continue;

  VAR_15 = FUNC_5(VAR_11, VAR_5, VAR_13);
  switch (VAR_15) {
  case 133:
   if (FUNC_4(VAR_9->dev_config, &VAR_13[0],
       VAR_4) == 0) {
    VAR_14 = -VAR_0;
    break;
   }
   FUNC_7("TCMU: Referencing Path: %s\n", VAR_9->dev_config);
   break;
  case 132:
   VAR_14 = FUNC_6(&VAR_13[0], &VAR_9->dev_size);
   if (VAR_14 < 0)
    FUNC_8("match_u64() failed for dev_size=. Error %d.\n",
           VAR_14);
   break;
  case 131:
   VAR_14 = FUNC_10(&VAR_13[0],
     &(VAR_6->dev_attrib.hw_block_size));
   break;
  case 130:
   VAR_14 = FUNC_10(&VAR_13[0],
     &(VAR_6->dev_attrib.hw_max_sectors));
   break;
  case 128:
   VAR_14 = FUNC_3(&VAR_13[0], &VAR_9->nl_reply_supported);
   if (VAR_14 < 0)
    FUNC_8("match_int() failed for nl_reply_supported=. Error %d.\n",
           VAR_14);
   break;
  case 129:
   VAR_14 = FUNC_11(VAR_9, &VAR_13[0]);
   break;
  default:
   break;
  }

  if (VAR_14)
   break;
 }

 FUNC_1(VAR_10);
 return (!VAR_14) ? VAR_8 : VAR_14;
}
