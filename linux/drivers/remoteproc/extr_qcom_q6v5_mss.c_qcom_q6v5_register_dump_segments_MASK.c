
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct q6v5* priv; } ;
struct q6v5 {int dump_complete_mask; int hexagon_mdt_image; int dev; } ;
struct firmware {scalar_t__ data; } ;
struct elf32_phdr {int p_memsz; int p_paddr; } ;
struct elf32_hdr {unsigned long e_phnum; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct elf32_phdr const*) ;
 int VAR_0 ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,int ,int ) ;
 int FUNC_5 (struct rproc*,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_6(struct rproc *VAR_1,
         const struct firmware *VAR_2)
{
 const struct firmware *VAR_3;
 const struct elf32_phdr *VAR_4;
 const struct elf32_phdr *VAR_5;
 const struct elf32_hdr *VAR_6;
 struct q6v5 *VAR_7 = VAR_1->priv;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(&VAR_3, VAR_7->hexagon_mdt_image, VAR_7->dev);
 if (VAR_9 < 0) {
  FUNC_1(VAR_7->dev, "unable to load %s\n",
   VAR_7->hexagon_mdt_image);
  return VAR_9;
 }

 VAR_6 = (struct elf32_hdr *)VAR_3->data;
 VAR_4 = (struct elf32_phdr *)(VAR_6 + 1);
 VAR_7->dump_complete_mask = 0;

 for (VAR_8 = 0; VAR_8 < VAR_6->e_phnum; VAR_8++) {
  VAR_5 = &VAR_4[VAR_8];

  if (!FUNC_2(VAR_5))
   continue;

  VAR_9 = FUNC_5(VAR_1, VAR_5->p_paddr,
       VAR_5->p_memsz,
       VAR_0,
       (void *)VAR_8);
  if (VAR_9)
   break;

  VAR_7->dump_complete_mask |= FUNC_0(VAR_8);
 }

 FUNC_3(VAR_3);
 return VAR_9;
}
