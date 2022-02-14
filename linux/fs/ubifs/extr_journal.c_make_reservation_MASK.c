
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int commit_sem; int bi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ubifs_info*,int,int) ;
 int FUNC_6 (struct ubifs_info*,int *) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*,char*,...) ;
 int FUNC_9 (struct ubifs_info*) ;
 int FUNC_10 (struct ubifs_info*,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ubifs_info *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0;

again:
 FUNC_2(&VAR_2->commit_sem);
 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)

  return 0;
 FUNC_11(&VAR_2->commit_sem);

 if (VAR_5 == -VAR_1) {






  if (VAR_7++ < 2) {
   FUNC_1("no space, retry");
   VAR_5 = -VAR_0;
  }







 }

 if (VAR_5 != -VAR_0)
  goto out;





 if (VAR_6 > 128) {




  FUNC_8(VAR_2, "stuck in space allocation");
  VAR_5 = -VAR_1;
  goto out;
 } else if (VAR_6 > 32)
  FUNC_10(VAR_2, "too many space allocation re-tries (%d)",
      VAR_6);

 FUNC_1("-EAGAIN, commit and retry (retried %d times)",
  VAR_6);
 VAR_6 += 1;

 VAR_5 = FUNC_9(VAR_2);
 if (VAR_5)
  return VAR_5;
 goto again;

out:
 FUNC_8(VAR_2, "cannot reserve %d bytes in jhead %d, error %d",
    VAR_4, VAR_3, VAR_5);
 if (VAR_5 == -VAR_1) {

  FUNC_3(&VAR_2->commit_sem);
  FUNC_4();
  FUNC_6(VAR_2, &VAR_2->bi);
  FUNC_7(VAR_2);
  VAR_6 = FUNC_0(VAR_2);
  FUNC_12(&VAR_2->commit_sem);
 }
 return VAR_5;
}
