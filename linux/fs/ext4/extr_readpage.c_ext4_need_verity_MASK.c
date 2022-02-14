
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct inode *VAR_1, pgoff_t VAR_2)
{
 return FUNC_1(VAR_1) &&
        VAR_2 < FUNC_0(VAR_1->i_size, VAR_0);
}
