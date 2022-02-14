
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_dev_id {unsigned int ssid; unsigned int devno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,unsigned int*,unsigned int*,unsigned int*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const char **VAR_2, struct ccw_dev_id *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0, VAR_8;
 char *VAR_9, *VAR_10;

 VAR_9 = (char *)*VAR_2;
 VAR_10 = FUNC_1(VAR_9, ',');
 if (!VAR_10) {

  VAR_10 = FUNC_1(VAR_9, '\n');
  if (VAR_10)
   *VAR_10 = '\0';
  VAR_8 = FUNC_2(VAR_9) + 1;
 } else {
  VAR_8 = VAR_10 - VAR_9 + 1;
  VAR_10++;
 }
 if (VAR_8 <= VAR_0) {
  if (FUNC_0(VAR_9, "%2x.%1x.%04x", &VAR_4, &VAR_5, &VAR_6) != 3)
   VAR_7 = -VAR_1;
 } else
  VAR_7 = -VAR_1;

 if (!VAR_7) {
  VAR_3->ssid = VAR_5;
  VAR_3->devno = VAR_6;
 }
 *VAR_2 = VAR_10;
 return VAR_7;
}
