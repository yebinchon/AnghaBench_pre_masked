
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m_roq_log_entry {int dummy; } ;
struct i2400m_roq {TYPE_1__* log; } ;
struct i2400m {int dummy; } ;
struct TYPE_2__ {unsigned int out; unsigned int in; struct i2400m_roq_log_entry* entry; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct i2400m*,struct i2400m_roq*) ;
 int FUNC_2 (struct i2400m*,int,unsigned int,struct i2400m_roq_log_entry*) ;
 int FUNC_3 (struct i2400m_roq_log_entry*,int ,int) ;

__attribute__((used)) static
void FUNC_4(struct i2400m *VAR_1, struct i2400m_roq *VAR_2)
{
 unsigned VAR_3, VAR_4;
 struct i2400m_roq_log_entry *VAR_5;
 int VAR_6 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_2->log->out > VAR_2->log->in);
 for (VAR_3 = VAR_2->log->out; VAR_3 < VAR_2->log->in; VAR_3++) {
  VAR_4 = VAR_3 % VAR_0;
  VAR_5 = &VAR_2->log->entry[VAR_4];
  FUNC_2(VAR_1, VAR_6, VAR_4, VAR_5);
  FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 }
 VAR_2->log->in = VAR_2->log->out = 0;
}
