
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_roq_log_entry {int type; int new_ws; int nsn; int sn; int count; int ws; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;






 int FUNC_0 (struct device*,char*,unsigned int,unsigned int,int,...) ;
 struct device* FUNC_1 (struct i2400m*) ;

__attribute__((used)) static
void FUNC_2(struct i2400m *VAR_0, unsigned VAR_1,
    unsigned VAR_2,
    struct i2400m_roq_log_entry *VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_0);

 switch(VAR_3->type) {
 case 129:
  FUNC_0(VAR_4, "q#%d reset           ws %u cnt %u sn %u/%u"
   " - new nws %u\n",
   VAR_1, VAR_3->ws, VAR_3->count, VAR_3->sn, VAR_3->nsn, VAR_3->new_ws);
  break;
 case 131:
  FUNC_0(VAR_4, "q#%d queue           ws %u cnt %u sn %u/%u\n",
   VAR_1, VAR_3->ws, VAR_3->count, VAR_3->sn, VAR_3->nsn);
  break;
 case 128:
  FUNC_0(VAR_4, "q#%d update_ws       ws %u cnt %u sn %u/%u"
   " - new nws %u\n",
   VAR_1, VAR_3->ws, VAR_3->count, VAR_3->sn, VAR_3->nsn, VAR_3->new_ws);
  break;
 case 130:
  FUNC_0(VAR_4, "q#%d queue_update_ws ws %u cnt %u sn %u/%u"
   " - new nws %u\n",
   VAR_1, VAR_3->ws, VAR_3->count, VAR_3->sn, VAR_3->nsn, VAR_3->new_ws);
  break;
 default:
  FUNC_0(VAR_4, "q#%d BUG? entry %u - unknown type %u\n",
   VAR_1, VAR_2, VAR_3->type);
  break;
 }
}
