
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct se_device {int dummy; } ;
struct rd_dev {int rd_page_count; int rd_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 struct rd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (char**,char*) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_7(struct se_device *VAR_6,
  const char *VAR_7, ssize_t VAR_8)
{
 struct rd_dev *VAR_9 = FUNC_0(VAR_6);
 char *VAR_10, *VAR_11, *VAR_12;
 substring_t VAR_13[VAR_2];
 int VAR_14, VAR_15;

 VAR_12 = FUNC_2(VAR_7, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_10 = VAR_12;

 while ((VAR_11 = FUNC_6(&VAR_12, ",\n")) != ((void*)0)) {
  if (!*VAR_11)
   continue;

  VAR_15 = FUNC_4(VAR_11, VAR_5, VAR_13);
  switch (VAR_15) {
  case 128:
   FUNC_3(VAR_13, &VAR_14);
   VAR_9->rd_page_count = VAR_14;
   FUNC_5("RAMDISK: Referencing Page"
    " Count: %u\n", VAR_9->rd_page_count);
   VAR_9->rd_flags |= VAR_3;
   break;
  case 129:
   FUNC_3(VAR_13, &VAR_14);
   if (VAR_14 != 1)
    break;

   FUNC_5("RAMDISK: Setting NULLIO flag: %d\n", VAR_14);
   VAR_9->rd_flags |= VAR_4;
   break;
  default:
   break;
  }
 }

 FUNC_1(VAR_10);
 return VAR_8;
}
