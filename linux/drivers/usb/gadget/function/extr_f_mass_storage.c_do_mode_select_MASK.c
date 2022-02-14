
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int sense_data; } ;
struct fsg_common {struct fsg_lun* curlun; } ;
struct fsg_buffhd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fsg_common *VAR_2, struct fsg_buffhd *VAR_3)
{
 struct fsg_lun *VAR_4 = VAR_2->curlun;


 if (VAR_4)
  VAR_4->sense_data = VAR_1;
 return -VAR_0;
}
