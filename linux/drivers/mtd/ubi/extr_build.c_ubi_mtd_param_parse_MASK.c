
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_dev_param {char* name; scalar_t__ vid_hdr_offs; int ubi_num; int max_beb_per1024; } ;
struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int *) ;
 struct mtd_dev_param* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*,int) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_7, const struct kernel_param *VAR_8)
{
 int VAR_9, VAR_10;
 struct mtd_dev_param *VAR_11;
 char VAR_12[VAR_1];
 char *VAR_13 = &VAR_12[0];
 char *VAR_14[VAR_2], *VAR_15;

 if (!VAR_7)
  return -VAR_0;

 if (VAR_6 == VAR_4) {
  FUNC_2("UBI error: too many parameters, max. is %d\n",
         VAR_4);
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_1);
 if (VAR_10 == VAR_1) {
  FUNC_2("UBI error: parameter \"%s\" is too long, max. is %d\n",
         VAR_7, VAR_1);
  return -VAR_0;
 }

 if (VAR_10 == 0) {
  FUNC_3("UBI warning: empty 'mtd=' parameter - ignored\n");
  return 0;
 }

 FUNC_4(VAR_12, VAR_7);


 if (VAR_12[VAR_10 - 1] == '\n')
  VAR_12[VAR_10 - 1] = '\0';

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_14[VAR_9] = FUNC_6(&VAR_13, ",");

 if (VAR_13) {
  FUNC_2("UBI error: too many arguments at \"%s\"\n", VAR_7);
  return -VAR_0;
 }

 VAR_11 = &VAR_5[VAR_6];
 FUNC_4(&VAR_11->name[0], VAR_14[0]);

 VAR_15 = VAR_14[1];
 if (VAR_15) {
  VAR_11->vid_hdr_offs = FUNC_0(VAR_15);

  if (VAR_11->vid_hdr_offs < 0)
   return VAR_11->vid_hdr_offs;
 }

 VAR_15 = VAR_14[2];
 if (VAR_15) {
  int VAR_16 = FUNC_1(VAR_15, 10, &VAR_11->max_beb_per1024);

  if (VAR_16) {
   FUNC_2("UBI error: bad value for max_beb_per1024 parameter: %s",
          VAR_15);
   return -VAR_0;
  }
 }

 VAR_15 = VAR_14[3];
 if (VAR_15) {
  int VAR_17 = FUNC_1(VAR_15, 10, &VAR_11->ubi_num);

  if (VAR_17) {
   FUNC_2("UBI error: bad value for ubi_num parameter: %s",
          VAR_15);
   return -VAR_0;
  }
 } else
  VAR_11->ubi_num = VAR_3;

 VAR_6 += 1;
 return 0;
}
