
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct hva_dev* private; } ;
struct hva_dev {TYPE_1__** encoders; int nb_of_encoders; } ;
struct TYPE_2__ {int streamformat; int pixelformat; int name; } ;


 int FUNC_0 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct hva_dev *VAR_2 = VAR_0->private;
 unsigned int VAR_3 = 0;

 FUNC_0(VAR_0, "[encoders]\n|- %d registered encoders:\n",
     VAR_2->nb_of_encoders);

 while (VAR_2->encoders[VAR_3]) {
  FUNC_0(VAR_0, "|- %s: %4.4s => %4.4s\n", VAR_2->encoders[VAR_3]->name,
      (char *)&VAR_2->encoders[VAR_3]->pixelformat,
      (char *)&VAR_2->encoders[VAR_3]->streamformat);
  VAR_3++;
 }

 return 0;
}
