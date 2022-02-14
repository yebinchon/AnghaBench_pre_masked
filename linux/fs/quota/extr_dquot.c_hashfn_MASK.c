
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct kqid {int type; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int FUNC_0 (int *,struct kqid) ;
 int VAR_4 ;

__attribute__((used)) static inline unsigned int
FUNC_1(const struct super_block *VAR_5, struct kqid VAR_6)
{
 unsigned int VAR_7 = FUNC_0(&VAR_4, VAR_6);
 int VAR_8 = VAR_6.type;
 unsigned long VAR_9;

 VAR_9 = (((unsigned long)VAR_5>>VAR_0) ^ VAR_7) * (VAR_1 - VAR_8);
 return (VAR_9 + (VAR_9 >> VAR_2)) & VAR_3;
}
