
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_rma_lookup {int offset; scalar_t__* lookup; } ;
struct scif_window {int nr_lookup; int nr_pages; scalar_t__ mapped_offset; struct scif_rma_lookup num_pages_lookup; struct scif_rma_lookup dma_addr_lookup; } ;
struct scif_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,struct scif_dev*,int) ;
 int FUNC_1 (scalar_t__,struct scif_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct scif_dev *VAR_2,
           struct scif_window *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->nr_lookup) {
  struct scif_rma_lookup *VAR_6 = &VAR_3->dma_addr_lookup;
  struct scif_rma_lookup *VAR_7 = &VAR_3->num_pages_lookup;

  for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_3->nr_pages;
   VAR_4 += VAR_1, VAR_5++) {
   if (VAR_6->lookup && VAR_6->lookup[VAR_5])
    FUNC_1(VAR_6->lookup[VAR_5],
        VAR_2,
        VAR_0);
   if (VAR_7->lookup && VAR_7->lookup[VAR_5])
    FUNC_1(VAR_7->lookup[VAR_5],
        VAR_2,
        VAR_0);
  }
  if (VAR_6->lookup)
   FUNC_0(VAR_6->lookup, VAR_6->offset,
        VAR_2, VAR_3->nr_lookup *
        sizeof(*VAR_6->lookup));
  if (VAR_7->lookup)
   FUNC_0(VAR_7->lookup, VAR_7->offset,
        VAR_2, VAR_3->nr_lookup *
        sizeof(*VAR_7->lookup));
  if (VAR_3->mapped_offset)
   FUNC_1(VAR_3->mapped_offset,
       VAR_2, sizeof(*VAR_3));
  VAR_3->nr_lookup = 0;
 }
}
