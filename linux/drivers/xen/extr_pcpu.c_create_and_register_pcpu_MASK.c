
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenpf_pcpuinfo {int flags; int xen_cpuid; } ;
struct pcpu {int flags; int list; int cpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcpu* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 struct pcpu* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct pcpu*) ;
 int VAR_5 ;

__attribute__((used)) static struct pcpu *FUNC_6(struct xenpf_pcpuinfo *VAR_6)
{
 struct pcpu *VAR_7;
 int VAR_8;

 if (VAR_6->flags & VAR_4)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(sizeof(struct pcpu), VAR_3);
 if (!VAR_7)
  return FUNC_0(-VAR_2);

 FUNC_1(&VAR_7->list);
 VAR_7->cpu_id = VAR_6->xen_cpuid;
 VAR_7->flags = VAR_6->flags;


 FUNC_3(&VAR_7->list, &VAR_5);

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8) {
  FUNC_4("Failed to register pcpu%u\n", VAR_6->xen_cpuid);
  return FUNC_0(-VAR_1);
 }

 return VAR_7;
}
