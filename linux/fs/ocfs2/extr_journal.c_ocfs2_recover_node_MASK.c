
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int node_num; int journal; } ;
struct ocfs2_dinode {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_super*,int,struct ocfs2_dinode**) ;
 int FUNC_3 (struct ocfs2_super*,int,struct ocfs2_dinode**) ;
 int FUNC_4 (struct ocfs2_super*,int) ;
 int FUNC_5 (int ,int,struct ocfs2_dinode*,struct ocfs2_dinode*,int *,int ) ;
 int FUNC_6 (struct ocfs2_super*,int,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_2,
         int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_dinode *VAR_6 = ((void*)0);
 struct ocfs2_dinode *VAR_7 = ((void*)0);

 FUNC_7(VAR_3, VAR_4, VAR_2->node_num);



 FUNC_0(VAR_2->node_num == VAR_3);

 VAR_5 = FUNC_6(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  if (VAR_5 == -VAR_0) {
   FUNC_8(VAR_4, VAR_3);
   VAR_5 = 0;
   goto done;
  }
  FUNC_1(VAR_5);
  goto done;
 }


 VAR_5 = FUNC_2(VAR_2, VAR_4, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_1(VAR_5);
  goto done;
 }




 VAR_5 = FUNC_3(VAR_2, VAR_4, &VAR_7);
 if (VAR_5 < 0)
  FUNC_1(VAR_5);



 VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (VAR_5 < 0)
  FUNC_1(VAR_5);


 FUNC_5(VAR_2->journal, VAR_4, VAR_6,
     VAR_7, ((void*)0), VAR_1);

 VAR_5 = 0;
done:

 return VAR_5;
}
