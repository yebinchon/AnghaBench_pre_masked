
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tv_sec; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_7__ {int tv_sec; } ;
struct inode {TYPE_1__ i_mtime; TYPE_3__ i_atime; TYPE_2__ i_ctime; } ;
struct dentry {int dummy; } ;
struct TYPE_10__ {int tz_secondswest; } ;
struct TYPE_9__ {int tz_minuteswest; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 struct inode* FUNC_1 (struct dentry*) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 if (VAR_4 & VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3);
 if(!VAR_5)
  return 1;


 VAR_6 = VAR_2.tz_minuteswest * 60 - FUNC_0(VAR_5)->tz_secondswest;
 if (VAR_6) {
  VAR_5->i_ctime.tv_sec += VAR_6;
  VAR_5->i_atime.tv_sec += VAR_6;
  VAR_5->i_mtime.tv_sec += VAR_6;
  FUNC_0(VAR_5)->tz_secondswest += VAR_6;
 }
 return 1;
}
