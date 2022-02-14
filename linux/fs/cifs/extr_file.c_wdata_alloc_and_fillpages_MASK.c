
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_writedata {int pages; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 struct cifs_writedata* FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct address_space*,scalar_t__*,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static struct cifs_writedata *
FUNC_2(pgoff_t VAR_2, struct address_space *VAR_3,
     pgoff_t VAR_4, pgoff_t *VAR_5,
     unsigned int *VAR_6)
{
 struct cifs_writedata *VAR_7;

 VAR_7 = FUNC_0((unsigned int)VAR_2,
         VAR_1);
 if (!VAR_7)
  return ((void*)0);

 *VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_4,
    VAR_0, VAR_2, VAR_7->pages);
 return VAR_7;
}
