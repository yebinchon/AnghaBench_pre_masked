
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct nfs_fh *VAR_2)
{
 unsigned int VAR_3=0;
 int VAR_4;
 for (VAR_4=0; VAR_4<VAR_1;VAR_4++)
  VAR_3 += VAR_2->data[VAR_4];
 return VAR_3 & (VAR_0 - 1);
}
