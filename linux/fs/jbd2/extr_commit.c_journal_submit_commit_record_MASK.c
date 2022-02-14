
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int transaction_t ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct commit_header {void** h_chksum; int h_chksum_size; int h_chksum_type; void* h_commit_nsec; int h_commit_sec; } ;
struct buffer_head {int b_end_io; scalar_t__ b_data; } ;
struct TYPE_7__ {int j_flags; } ;
typedef TYPE_1__ journal_t ;
typedef int __u32 ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 struct buffer_head* FUNC_8 (int *,int ) ;
 int VAR_8 ;
 int FUNC_9 (struct timespec64*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int ,int,struct buffer_head*) ;

__attribute__((used)) static int FUNC_13(journal_t *VAR_9,
     transaction_t *VAR_10,
     struct buffer_head **VAR_11,
     __u32 VAR_12)
{
 struct commit_header *VAR_13;
 struct buffer_head *VAR_14;
 int VAR_15;
 struct timespec64 VAR_16;

 *VAR_11 = ((void*)0);

 if (FUNC_4(VAR_9))
  return 0;

 VAR_14 = FUNC_8(VAR_10,
      VAR_1);
 if (!VAR_14)
  return 1;

 VAR_13 = (struct commit_header *)VAR_14->b_data;
 FUNC_9(&VAR_16);
 VAR_13->h_commit_sec = FUNC_3(VAR_16.tv_sec);
 VAR_13->h_commit_nsec = FUNC_2(VAR_16.tv_nsec);

 if (FUNC_7(VAR_9)) {
  VAR_13->h_chksum_type = VAR_2;
  VAR_13->h_chksum_size = VAR_3;
  VAR_13->h_chksum[0] = FUNC_2(VAR_12);
 }
 FUNC_5(VAR_9, VAR_14);

 FUNC_0(VAR_14, "submit commit block");
 FUNC_10(VAR_14);
 FUNC_1(VAR_14);
 FUNC_11(VAR_14);
 VAR_14->b_end_io = VAR_8;

 if (VAR_9->j_flags & VAR_0 &&
     !FUNC_6(VAR_9))
  VAR_15 = FUNC_12(VAR_5,
   VAR_7 | VAR_6 | VAR_4, VAR_14);
 else
  VAR_15 = FUNC_12(VAR_5, VAR_7, VAR_14);

 *VAR_11 = VAR_14;
 return VAR_15;
}
