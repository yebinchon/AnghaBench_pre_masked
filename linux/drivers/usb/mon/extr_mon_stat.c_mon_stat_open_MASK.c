
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snap {int str; int slen; } ;
struct mon_bus {int nreaders; int cnt_events; int cnt_text_lost; } ;
struct inode {struct mon_bus* i_private; } ;
struct file {struct snap* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snap* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 struct mon_bus *VAR_5;
 struct snap *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct snap), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5 = VAR_3->i_private;

 VAR_6->slen = FUNC_1(VAR_6->str, VAR_2,
     "nreaders %d events %u text_lost %u\n",
     VAR_5->nreaders, VAR_5->cnt_events, VAR_5->cnt_text_lost);

 VAR_4->private_data = VAR_6;
 return 0;
}
