
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flag; void* maxentry; void* nextindex; } ;
struct TYPE_5__ {TYPE_1__ header; } ;
typedef TYPE_2__ xtpage_t ;
typedef int tid_t ;
struct metapage {int dummy; } ;
struct inode {scalar_t__ i_size; int i_mode; } ;
struct TYPE_6__ {TYPE_2__ i_xtroot; int bxflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,struct inode*,struct metapage*,int) ;

void FUNC_4(tid_t VAR_8, struct inode *VAR_9)
{
 xtpage_t *VAR_10;






 FUNC_3(VAR_8, VAR_9, (struct metapage *) &FUNC_0(VAR_9)->bxflag,
        VAR_7 | VAR_6);
 VAR_10 = &FUNC_0(VAR_9)->i_xtroot;

 VAR_10->header.flag = VAR_2 | VAR_1 | VAR_0;
 VAR_10->header.nextindex = FUNC_2(VAR_3);

 if (FUNC_1(VAR_9->i_mode))
  VAR_10->header.maxentry = FUNC_2(VAR_5);
 else {
  VAR_10->header.maxentry = FUNC_2(VAR_4);
  VAR_9->i_size = 0;
 }


 return;
}
