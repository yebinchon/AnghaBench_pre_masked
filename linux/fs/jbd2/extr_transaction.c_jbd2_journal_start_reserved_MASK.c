
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {TYPE_1__* j_fs_dev; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_15__ {unsigned int h_type; unsigned int h_line_no; int h_buffer_credits; TYPE_2__* h_transaction; TYPE_3__* h_journal; int h_reserved; } ;
typedef TYPE_4__ handle_t ;
struct TYPE_13__ {int t_tid; } ;
struct TYPE_12__ {int bd_dev; } ;
struct TYPE_11__ {int journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_10__* VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int,int ) ;

int FUNC_5(handle_t *VAR_3, unsigned int VAR_4,
    unsigned int VAR_5)
{
 journal_t *VAR_6 = VAR_3->h_journal;
 int VAR_7 = -VAR_0;

 if (FUNC_0(!VAR_3->h_reserved)) {

  FUNC_2(VAR_3);
  return VAR_7;
 }




 if (FUNC_0(VAR_2->journal_info)) {
  FUNC_1(VAR_3);
  return VAR_7;
 }

 VAR_3->h_journal = ((void*)0);




 VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_1);
 if (VAR_7 < 0) {
  VAR_3->h_journal = VAR_6;
  FUNC_1(VAR_3);
  return VAR_7;
 }
 VAR_3->h_type = VAR_4;
 VAR_3->h_line_no = VAR_5;
 FUNC_4(VAR_6->j_fs_dev->bd_dev,
    VAR_3->h_transaction->t_tid, VAR_4,
    VAR_5, VAR_3->h_buffer_credits);
 return 0;
}
