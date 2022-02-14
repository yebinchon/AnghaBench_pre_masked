
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_quota {int dummy; } ;
struct gfs2_inode {int dummy; } ;
typedef unsigned long loff_t ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct gfs2_inode*,unsigned long,unsigned int,void*,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct gfs2_inode *VAR_2, struct gfs2_quota *VAR_3,
     loff_t VAR_4)
{
 unsigned long VAR_5;
 unsigned VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9 = 0, VAR_10;
 void *VAR_11;

 VAR_7 = sizeof(struct gfs2_quota);

 VAR_5 = VAR_4 >> VAR_0;
 VAR_6 = FUNC_1(VAR_4);


 if ((VAR_6 + VAR_7) > VAR_1) {
  VAR_9 = 1;
  VAR_8 = (VAR_6 + VAR_7) - VAR_1;
 }

 VAR_11 = VAR_3;
 VAR_10 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_11,
           VAR_7 - VAR_8);

 if (!VAR_10 && VAR_9)
  VAR_10 = FUNC_0(VAR_2, VAR_5 + 1, 0,
            VAR_11 + VAR_7 - VAR_8,
            VAR_8);
 return VAR_10;
}
