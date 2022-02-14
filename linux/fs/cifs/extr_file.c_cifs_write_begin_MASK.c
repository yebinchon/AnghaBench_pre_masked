
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int f_flags; } ;
struct address_space {int host; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,char*,long long,unsigned int) ;
 int FUNC_5 (struct file*,struct page*,int*) ;
 struct page* FUNC_6 (struct address_space*,int,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_7, struct address_space *VAR_8,
   loff_t VAR_9, unsigned VAR_10, unsigned VAR_11,
   struct page **VAR_12, void **VAR_13)
{
 int VAR_14 = 0;
 pgoff_t VAR_15 = VAR_9 >> VAR_5;
 loff_t VAR_16 = VAR_9 & (VAR_6 - 1);
 loff_t VAR_17 = VAR_9 & VAR_4;
 loff_t VAR_18;
 struct page *VAR_19;
 int VAR_20 = 0;

 FUNC_4(VAR_1, "write_begin from %lld len %d\n", (long long)VAR_9, VAR_10);

start:
 VAR_19 = FUNC_6(VAR_8, VAR_15, VAR_11);
 if (!VAR_19) {
  VAR_20 = -VAR_0;
  goto out;
 }

 if (FUNC_2(VAR_19))
  goto out;






 if (VAR_10 == VAR_6)
  goto out;







 if (FUNC_0(FUNC_1(VAR_8->host))) {
  VAR_18 = FUNC_7(VAR_8->host);
  if (VAR_17 >= VAR_18 ||
      (VAR_16 == 0 && (VAR_9 + VAR_10) >= VAR_18)) {
   FUNC_9(VAR_19, 0, VAR_16,
        VAR_16 + VAR_10,
        VAR_6);






   FUNC_3(VAR_19);
   goto out;
  }
 }

 if ((VAR_7->f_flags & VAR_2) != VAR_3 && !VAR_14) {





  FUNC_5(VAR_7, VAR_19, &VAR_17);
  FUNC_8(VAR_19);
  VAR_14 = 1;
  goto start;
 } else {




 }
out:
 *VAR_12 = VAR_19;
 return VAR_20;
}
