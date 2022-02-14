
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int vn_buf_size; char* vn_buf; int tb_path; int tb_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tree_balance*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct tree_balance*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct tree_balance *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_3(VAR_5->tb_sb, FUNC_1(VAR_5->tb_path));


 if (VAR_7 > VAR_5->vn_buf_size) {
  if (VAR_5->vn_buf) {

   FUNC_4(VAR_5->vn_buf);

   VAR_6 = 1;
  }


  VAR_5->vn_buf_size = VAR_7;


  VAR_8 = FUNC_5(VAR_7, VAR_1 | VAR_4);
  if (!VAR_8) {






   FUNC_2(VAR_5);
   VAR_8 = FUNC_5(VAR_7, VAR_2);
   if (!VAR_8) {
    VAR_5->vn_buf_size = 0;
   }
   VAR_5->vn_buf = VAR_8;
   FUNC_6();
   return VAR_3;
  }

  VAR_5->vn_buf = VAR_8;
 }

 if (VAR_6 && FUNC_0(VAR_5))
  return VAR_3;

 return VAR_0;
}
