
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_sb; } ;
struct bmap {int db_numag; int db_agpref; int* db_agfree; int * db_active; scalar_t__ db_nfree; } ;
typedef int s64 ;
struct TYPE_2__ {struct bmap* bmap; } ;


 int FUNC_0 (struct bmap*) ;
 int FUNC_1 (struct bmap*) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(struct inode *VAR_0)
{
 s64 VAR_1;
 int VAR_2;
 s64 VAR_3 = 0;
 int VAR_4;
 int VAR_5 = -1;
 struct bmap *VAR_6 = FUNC_2(VAR_0->i_sb)->bmap;

 FUNC_0(VAR_6);


 VAR_1 = (u32)VAR_6->db_nfree / VAR_6->db_numag;





 VAR_2 = VAR_6->db_agpref;
 if ((FUNC_3(&VAR_6->db_active[VAR_2]) == 0) &&
     (VAR_6->db_agfree[VAR_2] >= VAR_1))
  goto unlock;




 for (VAR_4 = 0 ; VAR_4 < VAR_6->db_numag; VAR_4++, VAR_2++) {
  if (VAR_2 == VAR_6->db_numag)
   VAR_2 = 0;

  if (FUNC_3(&VAR_6->db_active[VAR_2]))

   continue;
  if (VAR_6->db_agfree[VAR_2] >= VAR_1) {

   VAR_6->db_agpref = VAR_2;
   goto unlock;
  } else if (VAR_6->db_agfree[VAR_2] > VAR_3) {

   VAR_3 = VAR_6->db_agfree[VAR_2];
   VAR_5 = VAR_2;
  }
 }





 if (VAR_5 != -1)
  VAR_6->db_agpref = VAR_5;

unlock:
 FUNC_1(VAR_6);



 return (VAR_6->db_agpref);
}
