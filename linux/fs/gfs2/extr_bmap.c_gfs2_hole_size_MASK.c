
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct metapath {int dummy; } ;
struct iomap {int length; } ;
struct inode {int i_blkbits; } ;
typedef int sector_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct metapath*,struct metapath*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,struct metapath*,int,int ) ;
 int FUNC_3 (int ,struct metapath*) ;
 int FUNC_4 (struct metapath*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, sector_t VAR_2, u64 VAR_3,
     struct metapath *VAR_4, struct iomap *VAR_5)
{
 struct metapath VAR_6;
 u64 VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6, VAR_4);
 VAR_8 = FUNC_2(VAR_1, &VAR_6, VAR_3, VAR_0);
 if (VAR_8 < 0)
  goto out;

 if (VAR_8 == 1)
  VAR_7 = FUNC_3(FUNC_0(VAR_1), &VAR_6) - VAR_2;
 else
  VAR_7 = VAR_3;
 VAR_5->length = VAR_7 << VAR_1->i_blkbits;
 VAR_8 = 0;

out:
 FUNC_4(&VAR_6);
 return VAR_8;
}
