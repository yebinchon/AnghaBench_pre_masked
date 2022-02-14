
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_stream_runtime {char const* name; scalar_t__ m_rt_count; int state; int master_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct sdw_stream_runtime* FUNC_1 (int,int ) ;

struct sdw_stream_runtime *FUNC_2(const char *VAR_2)
{
 struct sdw_stream_runtime *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->name = VAR_2;
 FUNC_0(&VAR_3->master_list);
 VAR_3->state = VAR_1;
 VAR_3->m_rt_count = 0;

 return VAR_3;
}
