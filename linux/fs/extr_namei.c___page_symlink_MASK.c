
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *,struct address_space*,int ,int,unsigned int,struct page**,void**) ;
 int FUNC_4 (int *,struct address_space*,int ,int,int,struct page*,void*) ;

int FUNC_5(struct inode *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 struct address_space *VAR_5 = VAR_1->i_mapping;
 struct page *VAR_6;
 void *VAR_7;
 int VAR_8;
 unsigned int VAR_9 = 0;
 if (VAR_4)
  VAR_9 |= VAR_0;

retry:
 VAR_8 = FUNC_3(((void*)0), VAR_5, 0, VAR_3-1,
    VAR_9, &VAR_6, &VAR_7);
 if (VAR_8)
  goto fail;

 FUNC_1(FUNC_2(VAR_6), VAR_2, VAR_3-1);

 VAR_8 = FUNC_4(((void*)0), VAR_5, 0, VAR_3-1, VAR_3-1,
       VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto fail;
 if (VAR_8 < VAR_3-1)
  goto retry;

 FUNC_0(VAR_1);
 return 0;
fail:
 return VAR_8;
}
