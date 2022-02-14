
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct p9_qid {int path; } ;
typedef int path ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (scalar_t__*,int*,int) ;

ino_t FUNC_1(struct p9_qid *VAR_0)
{
 u64 VAR_1 = VAR_0->path + 2;
 ino_t VAR_2 = 0;

 if (sizeof(ino_t) == sizeof(VAR_1))
  FUNC_0(&VAR_2, &VAR_1, sizeof(ino_t));
 else
  VAR_2 = (ino_t) (VAR_1 ^ (VAR_1 >> 32));

 return VAR_2;
}
