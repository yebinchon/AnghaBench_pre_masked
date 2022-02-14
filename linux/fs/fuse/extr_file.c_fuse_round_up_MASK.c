
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int max_pages; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline loff_t FUNC_1(struct fuse_conn *VAR_1, loff_t VAR_2)
{
 return FUNC_0(VAR_2, VAR_1->max_pages << VAR_0);
}
