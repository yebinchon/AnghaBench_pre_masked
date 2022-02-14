
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int path_length; } ;
struct super_block {int dummy; } ;
struct reiserfs_key {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*,int) ;
 int VAR_0 ;
 struct reiserfs_key const VAR_1 ;
 struct reiserfs_key const VAR_2 ;
 struct buffer_head* FUNC_3 (struct treepath const*,int) ;
 int FUNC_4 (struct treepath const*,int) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (struct super_block const*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct reiserfs_key const* FUNC_8 (struct buffer_head*,int) ;

inline const struct reiserfs_key *FUNC_9(const struct treepath *VAR_3,
        const struct super_block *VAR_4)
{
 int VAR_5, VAR_6 = VAR_3->path_length;
 struct buffer_head *VAR_7;

 FUNC_5(VAR_6 < VAR_0,
        "PAP-5030: invalid offset in the path");

 while (VAR_6-- > VAR_0) {

  FUNC_5(!FUNC_7
         (FUNC_3(VAR_3, VAR_6)),
         "PAP-5040: parent is not uptodate");


  if (!FUNC_0
      (VAR_7 =
       FUNC_3(VAR_3, VAR_6)))
   return &VAR_2;

  if ((VAR_5 =
       FUNC_4(VAR_3,
       VAR_6)) >
      FUNC_1(VAR_7))
   return &VAR_2;




  if (FUNC_2(VAR_7, VAR_5) !=
      FUNC_3(VAR_3,
     VAR_6 + 1)->b_blocknr)
   return &VAR_2;





  if (VAR_5 != FUNC_1(VAR_7))
   return FUNC_8(VAR_7, VAR_5);
 }


 if (FUNC_3(VAR_3, VAR_0)->
     b_blocknr == FUNC_6(VAR_4))
  return &VAR_1;
 return &VAR_2;
}
