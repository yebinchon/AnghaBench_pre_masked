
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_debug_buf {int db_type; int db_size; int db_len; void* db_data; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,struct dentry*,struct o2hb_debug_buf*,int *) ;
 struct o2hb_debug_buf* FUNC_1 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(const char *VAR_4, struct dentry *VAR_5,
         struct o2hb_debug_buf **VAR_6, int VAR_7, int VAR_8,
         int VAR_9, int VAR_10, void *VAR_11)
{
 *VAR_6 = FUNC_1(VAR_7, VAR_0);
 if (!*VAR_6)
  return;

 (*VAR_6)->db_type = VAR_8;
 (*VAR_6)->db_size = VAR_9;
 (*VAR_6)->db_len = VAR_10;
 (*VAR_6)->db_data = VAR_11;

 FUNC_0(VAR_4, VAR_1|VAR_2, VAR_5, *VAR_6, &VAR_3);
}
